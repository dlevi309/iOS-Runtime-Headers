/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsBaseSource.h>
#import <MapsSuggestions/MapsSuggestionsSource.h>

@class NSArray, NSSet, NSString;

@interface MapsSuggestionsFakePullSource : MapsSuggestionsBaseSource <MapsSuggestionsSource> {

	ReadWriteQueue _readwrite;
	NSArray* _entriesToPull;
	NSSet* _fakeCanProduceEntriesOfType;
	unsigned long long _calledStart;
	unsigned long long _calledUpdateSuggestionEntries;
	unsigned long long _calledStop;
	unsigned long long _calledUserRemove;
	unsigned long long _calledFeedbackForEntry;
	unsigned long long _calledfeedbackForMapItem;
	unsigned long long _calledfeedbackForContact;
	/*^block*/id _handlerForFeedback;
	long long _calledUserRemoveBehavior;
	unsigned long long _totalAdded;
	double _configFrequency;
	BOOL _configSendCopies;

}

@property (readonly) unsigned long long calledStart; 
@property (readonly) unsigned long long calledUpdateSuggestionEntries; 
@property (readonly) unsigned long long calledStop; 
@property (readonly) unsigned long long calledUserRemove; 
@property (readonly) long long calledUserRemoveBehavior; 
@property (readonly) unsigned long long calledFeedbackForEntry; 
@property (readonly) unsigned long long calledfeedbackForMapItem; 
@property (readonly) unsigned long long calledfeedbackForContact; 
@property (readonly) unsigned long long totalAdded; 
@property (assign) double configFrequency;                                                   //@synthesize configFrequency=_configFrequency - In the implementation block
@property (assign) BOOL configSendCopies;                                                    //@synthesize configSendCopies=_configSendCopies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (assign,nonatomic,__weak) id<MapsSuggestionsSourceDelegate> delegate; 
+(BOOL)isEnabled;
+(unsigned long long)disposition;
-(void)stop;
-(void)start;
-(BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)feedbackForEntry:(id)arg1 action:(long long)arg2 ;
-(void)feedbackForMapItem:(id)arg1 action:(long long)arg2 ;
-(void)feedbackForContact:(id)arg1 action:(long long)arg2 ;
-(BOOL)canProduceEntriesOfType:(long long)arg1 ;
-(void)startDebugTest;
-(double)updateSuggestionEntries;
-(id)initWithDelegate:(id)arg1 name:(id)arg2 ;
-(unsigned long long)_addEntries:(id)arg1 ;
-(id)_copyEntriesIfNecessary:(id)arg1 ;
-(unsigned long long)calledStart;
-(unsigned long long)calledStop;
-(unsigned long long)calledUpdateSuggestionEntries;
-(unsigned long long)calledUserRemove;
-(unsigned long long)calledFeedbackForEntry;
-(unsigned long long)calledfeedbackForMapItem;
-(unsigned long long)calledfeedbackForContact;
-(long long)calledUserRemoveBehavior;
-(unsigned long long)totalAdded;
-(void)configureHandlerForFeedbackBlock:(/*^block*/id)arg1 ;
-(void)configCanProduceEntriesOfType:(id)arg1 ;
-(void)pushEntries:(id)arg1 ;
-(void)setPullResponseEntries:(id)arg1 ;
-(double)configFrequency;
-(void)setConfigFrequency:(double)arg1 ;
-(BOOL)configSendCopies;
-(void)setConfigSendCopies:(BOOL)arg1 ;
@end


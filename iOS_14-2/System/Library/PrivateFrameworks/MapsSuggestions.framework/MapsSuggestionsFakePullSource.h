/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	long long _lastUsedRemovalBehavior;
	unsigned long long _totalAdded;
	double _configureFrequency;
	BOOL _configureSendCopies;

}

@property (nonatomic,readonly) unsigned long long calledStart; 
@property (nonatomic,readonly) unsigned long long calledUpdateSuggestionEntries; 
@property (nonatomic,readonly) unsigned long long calledStop; 
@property (nonatomic,readonly) unsigned long long calledUserRemove; 
@property (nonatomic,readonly) unsigned long long calledFeedbackForEntry; 
@property (nonatomic,readonly) unsigned long long calledfeedbackForMapItem; 
@property (nonatomic,readonly) unsigned long long calledfeedbackForContact; 
@property (nonatomic,readonly) unsigned long long totalAdded; 
@property (nonatomic,readonly) long long lastUsedRemovalBehavior; 
@property (assign,nonatomic) double configureFrequency;                                       //@synthesize configureFrequency=_configureFrequency - In the implementation block
@property (assign,nonatomic) BOOL configureSendCopies;                                        //@synthesize configureSendCopies=_configureSendCopies - In the implementation block
@property (assign,nonatomic,__weak) id<MapsSuggestionsSourceDelegate> delegate; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)disposition;
+(BOOL)isEnabled;
-(void)feedbackForEntry:(id)arg1 action:(long long)arg2 ;
-(void)feedbackForContact:(id)arg1 action:(long long)arg2 ;
-(void)start;
-(void)feedbackForMapItem:(id)arg1 action:(long long)arg2 ;
-(BOOL)canProduceEntriesOfType:(long long)arg1 ;
-(void)stop;
-(char)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(unsigned long long)calledStop;
-(unsigned long long)calledStart;
-(unsigned long long)calledUpdateSuggestionEntries;
-(unsigned long long)calledUserRemove;
-(unsigned long long)calledFeedbackForEntry;
-(unsigned long long)calledfeedbackForMapItem;
-(unsigned long long)totalAdded;
-(unsigned long long)calledfeedbackForContact;
-(long long)lastUsedRemovalBehavior;
-(void)configureHandlerForFeedbackBlock:(/*^block*/id)arg1 ;
-(void)configureCanProduceEntriesOfType:(id)arg1 ;
-(void)pushEntries:(id)arg1 ;
-(void)configurePullResponseEntries:(id)arg1 ;
-(double)configureFrequency;
-(void)setConfigureFrequency:(double)arg1 ;
-(BOOL)configureSendCopies;
-(void)setConfigureSendCopies:(BOOL)arg1 ;
-(double)updateSuggestionEntriesWithHandler:(/*^block*/id)arg1 ;
-(id)initFromResourceDepot:(id)arg1 name:(id)arg2 ;
@end


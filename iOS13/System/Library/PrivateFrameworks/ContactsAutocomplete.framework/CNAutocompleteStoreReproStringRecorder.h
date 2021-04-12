/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/


@protocol CNTimeProvider;
@class NSMutableString, NSNumber, NSString;

@interface CNAutocompleteStoreReproStringRecorder : NSObject {

	id<CNTimeProvider> _timeProvider;
	NSMutableString* _reproStringStorage;
	NSNumber* _lastTimestamp;
	NSString* _lastString;

}

@property (readonly) id<CNTimeProvider> timeProvider;                    //@synthesize timeProvider=_timeProvider - In the implementation block
@property (readonly) NSMutableString * reproStringStorage;               //@synthesize reproStringStorage=_reproStringStorage - In the implementation block
@property (copy) NSNumber * lastTimestamp;                               //@synthesize lastTimestamp=_lastTimestamp - In the implementation block
@property (copy) NSString * lastString;                                  //@synthesize lastString=_lastString - In the implementation block
@property (nonatomic,copy,readonly) NSString * reproString; 
-(id)init;
-(id)description;
-(void)clear;
-(void)setLastTimestamp:(NSNumber *)arg1 ;
-(NSNumber *)lastTimestamp;
-(id<CNTimeProvider>)timeProvider;
-(id)initWithTimeProvider:(id)arg1 ;
-(void)recordString:(id)arg1 ;
-(NSMutableString *)reproStringStorage;
-(void)setLastString:(NSString *)arg1 ;
-(id)stringForIntervalSinceLastTimestamp:(double)arg1 ;
-(id)stringForKeystrokesSinceLastString:(id)arg1 ;
-(NSString *)lastString;
-(NSString *)reproString;
@end


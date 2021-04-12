/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)clear;
-(NSNumber *)lastTimestamp;
-(void)setLastTimestamp:(NSNumber *)arg1 ;
-(id)init;
-(id)description;
-(id)initWithTimeProvider:(id)arg1 ;
-(id<CNTimeProvider>)timeProvider;
-(void)recordString:(id)arg1 ;
-(NSMutableString *)reproStringStorage;
-(void)setLastString:(NSString *)arg1 ;
-(id)stringForIntervalSinceLastTimestamp:(double)arg1 ;
-(id)stringForKeystrokesSinceLastString:(id)arg1 ;
-(NSString *)lastString;
-(NSString *)reproString;
@end


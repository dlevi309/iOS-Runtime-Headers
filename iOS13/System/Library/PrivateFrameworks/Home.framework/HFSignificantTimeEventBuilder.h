/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFEventBuilder.h>
#import <libobjc.A.dylib/HFTimeEventBuilder.h>

@class NSString, NSDateComponents;

@interface HFSignificantTimeEventBuilder : HFEventBuilder <HFTimeEventBuilder> {

	NSString* _significantEvent;
	NSDateComponents* _significantEventOffset;

}

@property (nonatomic,copy) NSString * significantEvent;                            //@synthesize significantEvent=_significantEvent - In the implementation block
@property (nonatomic,copy) NSDateComponents * significantEventOffset;              //@synthesize significantEventOffset=_significantEventOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)initWithEvent:(id)arg1 ;
-(NSString *)significantEvent;
-(NSDateComponents *)significantEventOffset;
-(void)setSignificantEvent:(NSString *)arg1 ;
-(void)setSignificantEventOffset:(NSDateComponents *)arg1 ;
-(id)performValidation;
-(id)naturalLanguageNameOfType:(unsigned long long)arg1 withHome:(id)arg2 recurrences:(id)arg3 ;
-(id)buildNewEventFromCurrentState;
@end


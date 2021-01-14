/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVPlaybackEventMarshaling.h>

@class NSDictionary, NSString;

@interface TVPlaybackCustomEventUserInfo : NSObject <TVPlaybackEventMarshaling> {

	BOOL _expectsReturnValue;
	NSDictionary* _properties;
	id _returnValue;

}

@property (assign,nonatomic) BOOL expectsReturnValue;                  //@synthesize expectsReturnValue=_expectsReturnValue - In the implementation block
@property (nonatomic,readonly) id returnValue;                         //@synthesize returnValue=_returnValue - In the implementation block
@property (nonatomic,readonly) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(NSDictionary *)properties;
-(id)returnValue;
-(void)processReturnJSValue:(id)arg1 inContext:(id)arg2 ;
-(BOOL)expectsReturnValue;
-(id)initWithProperties:(id)arg1 expectsReturnValue:(BOOL)arg2 ;
-(void)setExpectsReturnValue:(BOOL)arg1 ;
@end


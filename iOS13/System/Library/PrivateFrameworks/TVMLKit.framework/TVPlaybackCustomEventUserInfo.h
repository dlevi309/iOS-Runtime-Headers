/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(NSDictionary *)properties;
-(id)returnValue;
-(void)processReturnJSValue:(id)arg1 inContext:(id)arg2 ;
-(BOOL)expectsReturnValue;
-(id)initWithProperties:(id)arg1 expectsReturnValue:(BOOL)arg2 ;
-(void)setExpectsReturnValue:(BOOL)arg1 ;
@end


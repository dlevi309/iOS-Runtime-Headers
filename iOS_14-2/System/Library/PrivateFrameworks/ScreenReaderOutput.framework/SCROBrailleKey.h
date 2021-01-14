/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSSecureCoding;
@class NSMutableArray, NSString;

@interface SCROBrailleKey : NSObject <NSSecureCoding> {

	NSMutableArray* _maskArray;
	NSString* _identifier;
	long long _routerIndex;
	long long _routerToken;
	long long _routerLocation;
	BOOL _hasRouterInfo;
	id<NSSecureCoding> _appToken;
	int _displayToken;
	int _displayMode;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(int)displayMode;
-(id)description;
-(id)keyMasks;
-(void)setDisplayMode:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(BOOL)getRouterIndex:(long long*)arg1 token:(long long*)arg2 location:(long long*)arg3 appToken:(id*)arg4 ;
-(void)setRouterIndex:(long long)arg1 token:(long long)arg2 location:(long long)arg3 appToken:(id)arg4 ;
-(void)setDisplayToken:(int)arg1 ;
-(void)addKeyMask:(unsigned)arg1 ;
-(void)addSpacebarKeyMask;
-(void)addModifierMask:(unsigned)arg1 ;
-(int)displayToken;
@end


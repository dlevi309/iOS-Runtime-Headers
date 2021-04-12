/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface CLIndoorTileEvictionPolicy : NSObject <NSSecureCoding> {

	BOOL _forceClean;
	double _maxModifiedAge;
	NSObject*<OS_xpc_object> _activity;

}

@property (assign,nonatomic) double maxModifiedAge;                          //@synthesize maxModifiedAge=_maxModifiedAge - In the implementation block
@property (assign,nonatomic) BOOL forceClean;                                //@synthesize forceClean=_forceClean - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> activity;              //@synthesize activity=_activity - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<OS_xpc_object>)activity;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(BOOL)tileLastModified:(double)arg1 needsEvictionAt:(double)arg2 ;
-(double)maxModifiedAge;
-(void)setMaxModifiedAge:(double)arg1 ;
-(BOOL)forceClean;
-(void)setForceClean:(BOOL)arg1 ;
@end


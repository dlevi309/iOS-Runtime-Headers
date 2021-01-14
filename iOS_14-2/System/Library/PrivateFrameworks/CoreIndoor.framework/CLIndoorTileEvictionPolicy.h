/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMaxModifiedAge:(double)arg1 ;
-(NSObject*<OS_xpc_object>)activity;
-(void)encodeWithCoder:(id)arg1 ;
-(double)maxModifiedAge;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(id)description;
-(BOOL)forceClean;
-(id)initWithCoder:(id)arg1 ;
-(void)setForceClean:(BOOL)arg1 ;
-(BOOL)tileLastModified:(double)arg1 needsEvictionAt:(double)arg2 ;
@end


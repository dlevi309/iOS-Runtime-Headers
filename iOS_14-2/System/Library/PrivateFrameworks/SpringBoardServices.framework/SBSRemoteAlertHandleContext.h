/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SBSRemoteAlertHandleContext : NSObject <NSSecureCoding> {

	BOOL _active;
	NSString* _handleID;

}

@property (nonatomic,copy,readonly) NSString * handleID;               //@synthesize handleID=_handleID - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;              //@synthesize active=_active - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setActive:(BOOL)arg1 ;
-(NSString *)handleID;
-(BOOL)isActive;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithHandleID:(id)arg1 ;
@end


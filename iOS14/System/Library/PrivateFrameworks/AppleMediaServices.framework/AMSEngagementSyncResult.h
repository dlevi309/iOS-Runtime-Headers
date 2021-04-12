/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AMSEngagementSyncResult : NSObject <NSSecureCoding> {

	NSArray* _actions;

}

@property (nonatomic,retain) NSArray * actions;              //@synthesize actions=_actions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)archiveClasses;
-(void)setActions:(NSArray *)arg1 ;
-(NSArray *)actions;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end


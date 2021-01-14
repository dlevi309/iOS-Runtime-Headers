/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray, AMSEngagementRequest;

@interface AMSEngagementEnqueueResult : NSObject <NSSecureCoding> {

	NSDictionary* _data;
	NSArray* _actions;
	AMSEngagementRequest* _request;

}

@property (nonatomic,retain) NSDictionary * data;                         //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSArray * actions;                           //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) AMSEngagementRequest * request;              //@synthesize request=_request - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)archiveClasses;
-(void)setActions:(NSArray *)arg1 ;
-(NSArray *)actions;
-(void)setRequest:(AMSEngagementRequest *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(AMSEngagementRequest *)request;
-(void)setData:(NSDictionary *)arg1 ;
-(NSDictionary *)data;
-(id)initWithCoder:(id)arg1 ;
@end


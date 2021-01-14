/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class AMSProcessInfo, NSArray, NSString;

@interface AMSEngagementEnqueueRequest : NSObject <NSSecureCoding> {

	AMSProcessInfo* _clientInfo;
	NSArray* _destinations;
	NSArray* _events;
	NSString* _logKey;
	double _timeout;

}

@property (nonatomic,retain) AMSProcessInfo * clientInfo;              //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,retain) NSArray * destinations;                   //@synthesize destinations=_destinations - In the implementation block
@property (nonatomic,retain) NSArray * events;                         //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSString * logKey;                        //@synthesize logKey=_logKey - In the implementation block
@property (assign,nonatomic) double timeout;                           //@synthesize timeout=_timeout - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)archiveClasses;
-(void)setDestinations:(NSArray *)arg1 ;
-(NSArray *)destinations;
-(AMSProcessInfo *)clientInfo;
-(void)setEvents:(NSArray *)arg1 ;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(void)setLogKey:(NSString *)arg1 ;
-(double)timeout;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)events;
-(NSString *)logKey;
@end


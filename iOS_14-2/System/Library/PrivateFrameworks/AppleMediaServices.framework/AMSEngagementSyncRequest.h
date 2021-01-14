/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray, NSString;

@interface AMSEngagementSyncRequest : NSObject <NSSecureCoding> {

	NSDictionary* _context;
	NSArray* _destinations;
	NSString* _logKey;
	double _timeout;

}

@property (nonatomic,retain) NSDictionary * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSArray * destinations;              //@synthesize destinations=_destinations - In the implementation block
@property (nonatomic,retain) NSString * logKey;                   //@synthesize logKey=_logKey - In the implementation block
@property (assign,nonatomic) double timeout;                      //@synthesize timeout=_timeout - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)archiveClasses;
-(void)setDestinations:(NSArray *)arg1 ;
-(NSArray *)destinations;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(void)setLogKey:(NSString *)arg1 ;
-(double)timeout;
-(NSDictionary *)context;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)logKey;
-(void)setContext:(NSDictionary *)arg1 ;
@end


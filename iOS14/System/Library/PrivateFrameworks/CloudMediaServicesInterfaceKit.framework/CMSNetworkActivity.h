/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_nw_activity;
@class NSObject;

@interface CMSNetworkActivity : NSObject <NSSecureCoding> {

	BOOL _completed;
	unsigned _label;
	NSObject*<OS_nw_activity> _nwActivity;

}

@property (nonatomic,readonly) unsigned label;                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_nw_activity> nwActivity;              //@synthesize nwActivity=_nwActivity - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSObject*<OS_nw_activity>)nwActivity;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)label;
-(void)dealloc;
-(void)associateWithTask:(id)arg1 ;
-(id)initWithLabel:(unsigned)arg1 parentActivity:(id)arg2 ;
-(void)completeActivity:(int)arg1 ;
-(id)initWithRetry:(id)arg1 ;
-(id)initWithLabel:(unsigned)arg1 parentUUID:(id)arg2 ;
@end


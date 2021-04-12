/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSHTTPURLResponse, NSData;

@interface ILNetworkResponse : NSObject <NSSecureCoding> {

	NSHTTPURLResponse* _urlResponse;
	NSData* _data;

}

@property (nonatomic,copy) NSHTTPURLResponse * urlResponse;              //@synthesize urlResponse=_urlResponse - In the implementation block
@property (nonatomic,copy) NSData * data;                                //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUrlResponse:(NSHTTPURLResponse *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSHTTPURLResponse *)urlResponse;
-(id)description;
-(NSData *)data;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURLResponse:(id)arg1 data:(id)arg2 ;
@end


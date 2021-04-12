/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSHTTPURLResponse *)urlResponse;
-(void)setUrlResponse:(NSHTTPURLResponse *)arg1 ;
-(id)initWithURLResponse:(id)arg1 data:(id)arg2 ;
@end


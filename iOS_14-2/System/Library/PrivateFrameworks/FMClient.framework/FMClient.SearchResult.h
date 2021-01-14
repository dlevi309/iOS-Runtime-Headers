/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface FMClient.SearchResult : NSObject <NSSecureCoding> {

	 devices;
	 resultCode;

}

@property (copy,nonatomic) NSArray * devices; 
@property (assign,nonatomic) long long resultCode; 
@property (readonly,nonatomic) NSString * debugDescription; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(id)init;
-(long long)resultCode;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(void)setResultCode:(long long)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
@end


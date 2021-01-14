/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface SSDownloadManifestResponse : NSObject <SSXPCCoding, NSSecureCoding> {

	NSArray* _validDownloads;

}

@property (copy) NSArray * validDownloads; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setValidDownloads:(NSArray *)arg1 ;
-(NSArray *)validDownloads;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end


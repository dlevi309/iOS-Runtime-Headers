/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SFCodingOptions : NSObject <NSCopying> {

	id _codingOptionsInternal;

}

@property (assign,nonatomic) long long encoding; 
@property (nonatomic,copy) NSString * encryptionPassphrase; 
-(void)setEncoding:(long long)arg1 ;
-(long long)encoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)encryptionPassphrase;
-(void)setEncryptionPassphrase:(NSString *)arg1 ;
@end


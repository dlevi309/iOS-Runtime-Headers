/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)encoding;
-(void)setEncoding:(long long)arg1 ;
-(NSString *)encryptionPassphrase;
-(void)setEncryptionPassphrase:(NSString *)arg1 ;
@end


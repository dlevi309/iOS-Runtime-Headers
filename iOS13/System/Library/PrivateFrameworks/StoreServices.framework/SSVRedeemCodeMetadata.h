/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, NSArray;

@interface SSVRedeemCodeMetadata : NSObject <NSCopying> {

	NSDictionary* _dictionary;
	NSString* _inputCode;

}

@property (nonatomic,readonly) BOOL allowsAutoSubmission; 
@property (nonatomic,readonly) NSDictionary * redeemCodeDictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSString * code; 
@property (nonatomic,readonly) NSString * codeType; 
@property (nonatomic,copy) NSString * inputCode;                                 //@synthesize inputCode=_inputCode - In the implementation block
@property (nonatomic,readonly) NSArray * items; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)code;
-(NSArray *)items;
-(NSString *)codeType;
-(id)initWithRedeemCodeDictionary:(id)arg1 ;
-(BOOL)allowsAutoSubmission;
-(NSString *)inputCode;
-(void)setInputCode:(NSString *)arg1 ;
-(NSDictionary *)redeemCodeDictionary;
@end


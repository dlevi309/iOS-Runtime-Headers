/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@class NSData, _SFKeySpecifier, NSString;

@interface _SFKey : NSObject {

	id _keyInternal;
	NSData* _keyData;

}

@property (nonatomic,readonly) NSData * keyData;                                 //@synthesize keyData=_keyData - In the implementation block
@property (nonatomic,copy,readonly) _SFKeySpecifier * keySpecifier; 
@property (nonatomic,copy,readonly) NSString * keyDomain; 
+(Class)_attributesClass;
+(id)_specifierForSecKey:(_SecKey*)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(NSString *)keyDomain;
-(NSData *)keyData;
-(BOOL)isEqual:(id)arg1 ;
-(_SFKeySpecifier *)keySpecifier;
-(id)initWithData:(id)arg1 specifier:(id)arg2 error:(id*)arg3 ;
-(id)initRandomKeyWithSpecifier:(id)arg1 ;
@end


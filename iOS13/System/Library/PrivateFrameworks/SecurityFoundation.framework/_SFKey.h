/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(NSData *)keyData;
-(id)initWithData:(id)arg1 specifier:(id)arg2 error:(id*)arg3 ;
-(_SFKeySpecifier *)keySpecifier;
-(NSString *)keyDomain;
-(id)initRandomKeyWithSpecifier:(id)arg1 ;
@end


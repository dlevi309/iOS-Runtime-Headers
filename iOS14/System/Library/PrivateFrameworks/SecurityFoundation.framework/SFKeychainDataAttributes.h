/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/SFKeychainItemAttributes.h>

@class NSString;

@interface SFKeychainDataAttributes : NSObject <SFKeychainItemAttributes> {

	id _keychainDataAttributesInternal;

}

@property (nonatomic,copy) NSString * localizedLabel; 
@property (nonatomic,copy) NSString * localizedDescription; 
@property (nonatomic,copy,readonly) NSString * persistentIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setLocalizedLabel:(NSString *)arg1 ;
-(NSString *)localizedLabel;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)localizedDescription;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


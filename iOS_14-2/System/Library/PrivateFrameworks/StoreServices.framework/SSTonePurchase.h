/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSPurchase.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSNumber, NSString;

@interface SSTonePurchase : SSPurchase <SSXPCCoding, NSSecureCoding, NSCopying> {

	NSArray* _allowedToneStyles;
	NSNumber* _assigneeIdentifier;
	NSString* _assigneeContactIdentifier;
	NSString* _assigneeToneStyle;
	BOOL _shouldMakeDefaultRingtone;
	BOOL _shouldMakeDefaultTextTone;

}

@property (copy) NSArray * allowedToneStyles; 
@property (retain) NSNumber * assigneeIdentifier; 
@property (retain) NSString * assigneeContactIdentifier; 
@property (copy) NSString * assigneeToneStyle; 
@property (assign) BOOL shouldMakeDefaultRingtone; 
@property (assign) BOOL shouldMakeDefaultTextTone; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithItem:(id)arg1 offer:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setValuesUsingDatabaseEncoding:(id)arg1 ;
-(void)_addEntriesToDatabaseEncoding:(id)arg1 ;
-(NSArray *)allowedToneStyles;
-(void)setAllowedToneStyles:(NSArray *)arg1 ;
-(void)setAssigneeIdentifier:(NSNumber *)arg1 ;
-(void)setAssigneeContactIdentifier:(NSString *)arg1 ;
-(void)setAssigneeToneStyle:(NSString *)arg1 ;
-(void)setShouldMakeDefaultRingtone:(BOOL)arg1 ;
-(void)setShouldMakeDefaultTextTone:(BOOL)arg1 ;
-(NSNumber *)assigneeIdentifier;
-(NSString *)assigneeContactIdentifier;
-(NSString *)assigneeToneStyle;
-(BOOL)shouldMakeDefaultRingtone;
-(BOOL)shouldMakeDefaultTextTone;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


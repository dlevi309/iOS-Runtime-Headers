/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HMBModelFieldOption.h>

@class NSString;

@interface HMBModelFieldOptionExternalRecordField : HMBModelFieldOption {

	BOOL _encrypted;
	NSString* _fieldName;

}

@property (nonatomic,readonly) NSString * fieldName;              //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,readonly) BOOL encrypted;                    //@synthesize encrypted=_encrypted - In the implementation block
-(BOOL)encrypted;
-(id)initWithExternalRecordField:(id)arg1 encrypted:(BOOL)arg2 ;
-(NSString *)fieldName;
-(void)applyTo:(id)arg1 ;
@end


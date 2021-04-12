/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)fieldName;
-(void)applyTo:(id)arg1 ;
-(id)initWithExternalRecordField:(id)arg1 encrypted:(BOOL)arg2 ;
@end


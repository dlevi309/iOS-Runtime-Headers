/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class NSArray, NSMutableDictionary;

@interface REMAuxiliaryChangeInfoFetchResult : NSObject {

	NSArray* _auxiliaryChangeInfos;
	Class _typedKlass;
	NSMutableDictionary* _changeObjectForAuxiliaryChangeInfoMap;

}

@property (nonatomic,retain) NSArray * auxiliaryChangeInfos;                                           //@synthesize auxiliaryChangeInfos=_auxiliaryChangeInfos - In the implementation block
@property (assign,nonatomic) Class typedKlass;                                                         //@synthesize typedKlass=_typedKlass - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * changeObjectForAuxiliaryChangeInfoMap;              //@synthesize changeObjectForAuxiliaryChangeInfoMap=_changeObjectForAuxiliaryChangeInfoMap - In the implementation block
+(id)auxiliaryChangeInfoFetchResultOfType:(Class)arg1 ;
-(NSMutableDictionary *)changeObjectForAuxiliaryChangeInfoMap;
-(id)initWithAuxiliaryChangeInfoType:(Class)arg1 ;
-(id)changeObjectForAuxiliaryChangeInfo:(id)arg1 ;
-(NSArray *)auxiliaryChangeInfos;
-(void)setAuxiliaryChangeInfos:(NSArray *)arg1 ;
-(void)setAuxiliaryChangeInfos:(NSArray *)arg1 ;
-(Class)typedKlass;
-(void)setTypedKlass:(Class)arg1 ;
-(void)setChangeObjectForAuxiliaryChangeInfoMap:(NSMutableDictionary *)arg1 ;
-(id)auxiliaryChangeInfoFromData:(id)arg1 withObjectID:(id)arg2 fromChangeObject:(id)arg3 error:(id*)arg4 ;
@end


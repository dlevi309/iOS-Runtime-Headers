/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(Class)typedKlass;
-(NSMutableDictionary *)changeObjectForAuxiliaryChangeInfoMap;
-(id)initWithAuxiliaryChangeInfoType:(Class)arg1 ;
-(id)changeObjectForAuxiliaryChangeInfo:(id)arg1 ;
-(NSArray *)auxiliaryChangeInfos;
-(void)setAuxiliaryChangeInfos:(NSArray *)arg1 ;
-(void)setAuxiliaryChangeInfos:(NSArray *)arg1 ;
-(void)setTypedKlass:(Class)arg1 ;
-(void)setChangeObjectForAuxiliaryChangeInfoMap:(NSMutableDictionary *)arg1 ;
-(id)auxiliaryChangeInfoFromData:(id)arg1 withObjectID:(id)arg2 fromChangeObject:(id)arg3 error:(id*)arg4 ;
@end


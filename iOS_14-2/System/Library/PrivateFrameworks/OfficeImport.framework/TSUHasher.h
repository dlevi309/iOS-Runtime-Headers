/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface TSUHasher : NSObject {

	unsigned long long _currentHash;

}

@property (assign,nonatomic) unsigned long long currentHash;              //@synthesize currentHash=_currentHash - In the implementation block
-(id)init;
-(void)addObject:(id)arg1 ;
-(unsigned long long)hashValue;
-(void)addInt:(int)arg1 ;
-(unsigned long long)currentHash;
-(void)setCurrentHash:(unsigned long long)arg1 ;
-(void)p_appendUnsignedInteger:(unsigned long long)arg1 ;
-(void)addUnsignedInt:(unsigned)arg1 ;
-(void)addBool:(BOOL)arg1 ;
-(void)addInteger:(long long)arg1 ;
-(void)addUnsignedInteger:(unsigned long long)arg1 ;
@end


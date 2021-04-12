/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface TSUHasher : NSObject {

	unsigned long long _currentHash;

}

@property (assign,nonatomic) unsigned long long currentHash;              //@synthesize currentHash=_currentHash - In the implementation block
-(id)init;
-(void)addObject:(id)arg1 ;
-(unsigned long long)hashValue;
-(unsigned long long)currentHash;
-(void)setCurrentHash:(unsigned long long)arg1 ;
-(void)p_appendUnsignedInteger:(unsigned long long)arg1 ;
-(void)addInt:(int)arg1 ;
-(void)addUnsignedInt:(unsigned)arg1 ;
-(void)addBool:(BOOL)arg1 ;
-(void)addInteger:(long long)arg1 ;
-(void)addUnsignedInteger:(unsigned long long)arg1 ;
@end


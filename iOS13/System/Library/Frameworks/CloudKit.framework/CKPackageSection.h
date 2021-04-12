/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@class NSData;

@interface CKPackageSection : NSObject {

	long long _index;
	NSData* _signature;
	unsigned long long _size;

}

@property (nonatomic,readonly) long long index;                    //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) NSData * signature;                 //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) unsigned long long size;              //@synthesize size=_size - In the implementation block
-(id)description;
-(unsigned long long)size;
-(long long)index;
-(void)setSize:(unsigned long long)arg1 ;
-(NSData *)signature;
-(id)CKPropertiesDescription;
-(id)initWithIndex:(long long)arg1 signature:(id)arg2 size:(unsigned long long)arg3 ;
@end


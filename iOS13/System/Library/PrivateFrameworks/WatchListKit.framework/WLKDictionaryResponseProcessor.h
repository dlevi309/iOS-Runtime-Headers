/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSString;

@interface WLKDictionaryResponseProcessor : NSObject {

	NSString* _dictionaryKeyPath;
	Class _objectClass;

}

@property (nonatomic,copy) NSString * dictionaryKeyPath;              //@synthesize dictionaryKeyPath=_dictionaryKeyPath - In the implementation block
@property (nonatomic,retain) Class objectClass;                       //@synthesize objectClass=_objectClass - In the implementation block
-(Class)objectClass;
-(void)setObjectClass:(Class)arg1 ;
-(id)processResponseData:(id)arg1 error:(id*)arg2 ;
-(id)processResponseData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(NSString *)dictionaryKeyPath;
-(void)setDictionaryKeyPath:(NSString *)arg1 ;
@end


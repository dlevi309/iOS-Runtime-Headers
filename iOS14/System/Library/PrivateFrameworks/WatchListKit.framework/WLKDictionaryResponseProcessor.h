/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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


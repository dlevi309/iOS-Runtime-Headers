/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


@interface TSUIntToIntDictionaryKeyEnumerator : NSObject {

	long long* _keys;
	unsigned long long _count;
	unsigned long long _index;

}
-(long long)nextKey;
-(void)dealloc;
-(id)initWithIntegerKeyDictionary:(id)arg1 ;
@end


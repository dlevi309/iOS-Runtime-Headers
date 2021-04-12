/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/


@interface CoreThemeConstantEnumerator : NSObject {

	void* _globalListPointer;
	long long _listIndex;
	long long _indexOfLastEntry;
	BOOL _isPastLastEntry;

}
+(id)enumeratorForGlobalListAtAddress:(void*)arg1 ;
-(id)initWithGlobalListAtAddress:(void*)arg1 ;
-(id)nextConstantHelper;
-(void)_moveToIndexOfLastEntry;
-(id)currentConstantHelper;
-(long long)constantCount;
-(id)previousConstantHelper;
-(id)firstConstantHelper;
-(id)lastConstantHelper;
@end


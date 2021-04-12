/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/


#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@class NSData, TDRenditionSpec;

@interface TDRenditionEntry : NSObject {

	renditionkeytoken* key;
	renditionkeytoken stackKey[22];
	const renditionkeyfmt* keyFormat;
	NSData* assetData;
	TDRenditionSpec* renditionSpec;

}

@property (nonatomic,retain,readonly) TDRenditionSpec * renditionSpec; 
@property (nonatomic,retain,readonly) NSData * assetData; 
-(void)dealloc;
-(long long)compare:(id)arg1 ;
-(NSData *)assetData;
-(TDRenditionSpec *)renditionSpec;
-(id)initWithKey:(const renditionkeytoken*)arg1 keyFormat:(const renditionkeyfmt*)arg2 assetData:(id)arg3 renditionSpec:(id)arg4 ;
@end


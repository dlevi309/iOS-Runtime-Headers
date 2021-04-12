/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableDictionary;

@interface OADColorMap : NSObject {

	NSMutableDictionary* mMappings;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEmpty;
-(void)addDefaultMappings:(BOOL)arg1 ;
-(void)addMapping:(int)arg1 index:(int)arg2 ;
-(int)mappingForIndex:(int)arg1 ;
@end


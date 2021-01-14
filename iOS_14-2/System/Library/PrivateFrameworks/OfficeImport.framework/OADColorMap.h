/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableDictionary;

@interface OADColorMap : NSObject {

	NSMutableDictionary* mMappings;

}
-(id)init;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg1 ;
-(void)addDefaultMappings:(BOOL)arg1 ;
-(void)addMapping:(int)arg1 index:(int)arg2 ;
-(int)mappingForIndex:(int)arg1 ;
@end


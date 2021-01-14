/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OCPPackagePart, NSString, NSMutableDictionary;

@interface OAXTableStyleCache : NSObject {

	OCPPackagePart* mStylesPart;
	NSString* mDefaultStyleId;
	NSMutableDictionary* mCache;

}
-(id)init;
-(xmlNode*)styleNodeForId:(id)arg1 ;
-(void)setStylesPart:(id)arg1 ;
-(id)defaultStyleId;
-(void)setDefaultStyleId:(id)arg1 ;
-(void)setStyleNode:(xmlNode*)arg1 forId:(id)arg2 ;
-(xmlNode*)defaultStyleNode;
@end


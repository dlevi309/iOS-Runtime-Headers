/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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


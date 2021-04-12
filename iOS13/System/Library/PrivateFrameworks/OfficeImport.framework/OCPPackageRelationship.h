/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString, NSURL;

@interface OCPPackageRelationship : NSObject {

	NSString* mIdentifier;
	NSString* mType;
	int mTargetMode;
	NSURL* mTargetLocation;

}
-(id)type;
-(id)identifier;
-(id)targetLocation;
-(int)targetMode;
-(void)readFromElement:(xmlNode*)arg1 baseLocation:(id)arg2 ;
-(id)initWithXmlElement:(xmlNode*)arg1 baseLocation:(id)arg2 ;
@end


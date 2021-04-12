/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADShapeProperties.h>

@class OADConnection;

@interface OADConnectorProperties : OADShapeProperties {

	OADConnection* mFrom;
	OADConnection* mTo;

}
+(id)defaultProperties;
-(id)init;
-(id)description;
-(id)to;
-(id)from;
-(id)initWithDefaults;
@end


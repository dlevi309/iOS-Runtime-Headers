/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OADClient.h>

@class CHDAnchor, NSString;

@interface CHDOfficeArtClient : NSObject <OADClient> {

	CHDAnchor* mAnchor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)bounds;
-(id)anchor;
-(void)setAnchor:(id)arg1 ;
-(BOOL)hasBounds;
@end


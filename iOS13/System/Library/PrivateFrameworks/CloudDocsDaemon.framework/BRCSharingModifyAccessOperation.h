/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCDocumentItem, NSData, NSString;

@interface BRCSharingModifyAccessOperation : _BRCFrameworkOperation <BRCOperationSubclass> {

	BRCDocumentItem* _document;
	BOOL _allowAccess;
	NSData* _accessToken;
	NSString* _referenceIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(id)createActivity;
-(id)initWithItem:(id)arg1 allowAccess:(BOOL)arg2 ;
@end


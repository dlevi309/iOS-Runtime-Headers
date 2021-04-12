/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSMutableSet, NSString;

@interface _MXExtensionContainingAppProxy : NSObject {

	NSMutableSet* _extensionUIIdentifiers;
	NSMutableSet* _extensionNonUIIdentifiers;
	NSString* _containingAppIdentifer;

}

@property (nonatomic,copy,readonly) NSString * containingAppIdentifer;              //@synthesize containingAppIdentifer=_containingAppIdentifer - In the implementation block
@property (nonatomic,retain) NSMutableSet * extensionNonUIIdentifiers;              //@synthesize extensionNonUIIdentifiers=_extensionNonUIIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableSet * extensionUIIdentifiers;                 //@synthesize extensionUIIdentifiers=_extensionUIIdentifiers - In the implementation block
-(id)initWithContainingAppIdentifer:(id)arg1 ;
-(NSMutableSet *)extensionUIIdentifiers;
-(void)setExtensionUIIdentifiers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)extensionNonUIIdentifiers;
-(void)setExtensionNonUIIdentifiers:(NSMutableSet *)arg1 ;
-(NSString *)containingAppIdentifer;
@end


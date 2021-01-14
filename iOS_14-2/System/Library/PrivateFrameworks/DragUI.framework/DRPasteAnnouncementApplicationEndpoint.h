/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DragUI.framework/DragUI
*/

#import <DragUI/DragUI-Structs.h>
#import <DragUI/DRPasteAnnouncementEndpoint.h>

@class NSData, NSString;

@interface DRPasteAnnouncementApplicationEndpoint : DRPasteAnnouncementEndpoint {

	struct {
		unsigned isHomeScreen : 1;
	}  _flags;
	NSData* _persistentIdentifier;

}

@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSData * persistentIdentifier;              //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)homeScreenEndpoint;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)persistentIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithLocalizedName:(id)arg1 persistentIdentifier:(id)arg2 ;
@end


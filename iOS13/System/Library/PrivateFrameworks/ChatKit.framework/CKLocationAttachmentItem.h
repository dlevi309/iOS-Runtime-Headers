/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAttachmentItem.h>

@class NSString;

@interface CKLocationAttachmentItem : CKAttachmentItem {

	NSString* _locationTitle;
	CLLocationCoordinate2D _coordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,copy) NSString * locationTitle;                         //@synthesize locationTitle=_locationTitle - In the implementation block
+(id)UTITypes;
-(CLLocationCoordinate2D)coordinate;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(NSString *)locationTitle;
-(void)setLocationTitle:(NSString *)arg1 ;
-(void)generatePreviewWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithFileURL:(id)arg1 size:(CGSize)arg2 transferGUID:(id)arg3 guid:(id)arg4 createdDate:(id)arg5 ;
-(id)_generateThumbnailFillToSize:(CGSize)arg1 ;
-(id)vCardURLProperties;
-(BOOL)isDroppedPin;
@end


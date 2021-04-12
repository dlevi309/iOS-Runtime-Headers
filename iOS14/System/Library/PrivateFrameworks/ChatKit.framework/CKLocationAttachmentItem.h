/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFileURL:(id)arg1 size:(CGSize)arg2 transferGUID:(id)arg3 guid:(id)arg4 createdDate:(id)arg5 ;
-(CLLocationCoordinate2D)coordinate;
-(void)generatePreviewWithCompletion:(/*^block*/id)arg1 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setLocationTitle:(NSString *)arg1 ;
-(id)_generateThumbnailFillToSize:(CGSize)arg1 ;
-(id)vCardURLProperties;
-(BOOL)isDroppedPin;
-(NSString *)locationTitle;
@end


/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariShared/WBSParsecModel.h>

@class WBSParsecImageRepresentation, NSString;

@interface WBSParsecSportsImage : WBSParsecModel {

	long long _alignment;
	WBSParsecImageRepresentation* _imageRepresentation;
	NSString* _label;
	NSString* _name;

}

@property (nonatomic,readonly) long long alignment;                                             //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * imageRepresentation;              //@synthesize imageRepresentation=_imageRepresentation - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                            //@synthesize name=_name - In the implementation block
+(id)schema;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(long long)alignment;
-(NSString *)label;
-(WBSParsecImageRepresentation *)imageRepresentation;
@end


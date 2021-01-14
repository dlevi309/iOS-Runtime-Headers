/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(WBSParsecImageRepresentation *)imageRepresentation;
-(long long)alignment;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(NSString *)label;
@end


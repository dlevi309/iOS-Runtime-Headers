/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFWebResource, NSArray, NSData;

@interface WFWebArchive : NSObject <NSSecureCoding> {

	WFWebResource* _mainResource;
	NSArray* _subresources;
	NSArray* _subframeArchives;

}

@property (nonatomic,readonly) WFWebResource * mainResource;              //@synthesize mainResource=_mainResource - In the implementation block
@property (nonatomic,readonly) NSArray * subresources;                    //@synthesize subresources=_subresources - In the implementation block
@property (nonatomic,readonly) NSArray * subframeArchives;                //@synthesize subframeArchives=_subframeArchives - In the implementation block
@property (nonatomic,readonly) NSData * data; 
+(BOOL)supportsSecureCoding;
-(id)serializedRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMainResource:(id)arg1 subresources:(id)arg2 subframeArchives:(id)arg3 ;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)subresources;
-(WFWebResource *)mainResource;
-(NSArray *)subframeArchives;
@end


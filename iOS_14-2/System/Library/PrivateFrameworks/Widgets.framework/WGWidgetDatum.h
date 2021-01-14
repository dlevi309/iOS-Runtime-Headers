/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <libobjc.A.dylib/WGDatum.h>

@class NSString, NSExtension;

@interface WGWidgetDatum : NSObject <WGDatum> {

	NSExtension* _representedExtension;

}

@property (nonatomic,readonly) NSExtension * representedExtension;              //@synthesize representedExtension=_representedExtension - In the implementation block
@property (nonatomic,copy,readonly) NSString * datumIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSExtension *)representedExtension;
-(id)initWithExtension:(id)arg1 ;
-(NSString *)description;
-(NSString *)datumIdentifier;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end


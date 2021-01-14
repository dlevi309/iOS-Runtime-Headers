/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/_MXExtensionLookupPolicy.h>

@protocol _MXExtensionLookupPolicy <NSObject>
@required
-(id)extensionPredicate;

@end


@class NSPredicate, NSString;

@interface _MXExtensionLookupPolicy : NSObject <_MXExtensionLookupPolicy> {

	NSPredicate* _extensionPredicate;

}

@property (nonatomic,retain) NSPredicate * extensionPredicate;              //@synthesize extensionPredicate=_extensionPredicate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPredicate:(id)arg1 ;
-(NSPredicate *)extensionPredicate;
-(void)setExtensionPredicate:(NSPredicate *)arg1 ;
@end


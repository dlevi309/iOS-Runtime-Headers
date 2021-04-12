/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSError, NSString;

@interface PFCloudKitErrorLogEntry : NSObject {

	NSError* _error;
	NSString* _annotation;

}

@property (nonatomic,readonly) NSString * annotation;              //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,readonly) NSError * error;                    //@synthesize error=_error - In the implementation block
-(NSString *)annotation;
-(id)initWithError:(id)arg1 annotation:(id)arg2 ;
-(NSError *)error;
-(void)dealloc;
@end


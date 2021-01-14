/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class NSString, NSDictionary, NSError, NSArray;

@interface IMXMLReparserContext : NSObject {

	NSString* _inContent;
	NSString* _outContent;
	NSDictionary* _attributesToMerge;
	NSError* _error;
	NSArray* _attributesToPreserve;

}

@property (retain,readonly) NSString * _inContent;                                   //@synthesize inContent=_inContent - In the implementation block
@property (nonatomic,retain,readonly) NSArray * attributesToPreserve;                //@synthesize attributesToPreserve=_attributesToPreserve - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * attributesToMerge;              //@synthesize attributesToMerge=_attributesToMerge - In the implementation block
@property (nonatomic,retain,readonly) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) NSString * outContent;                           //@synthesize outContent=_outContent - In the implementation block
-(NSString *)_inContent;
-(NSString *)outContent;
-(void)_setOutContent:(id)arg1 error:(id)arg2 ;
-(NSArray *)attributesToPreserve;
-(NSDictionary *)attributesToMerge;
-(id)initWithContent:(id)arg1 attributesToPreserve:(id)arg2 attributesToMerge:(id)arg3 ;
-(NSError *)error;
-(void)dealloc;
@end


/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSError *)error;
-(NSString *)_inContent;
-(void)_setOutContent:(id)arg1 error:(id)arg2 ;
-(NSArray *)attributesToPreserve;
-(NSDictionary *)attributesToMerge;
-(id)initWithContent:(id)arg1 attributesToPreserve:(id)arg2 attributesToMerge:(id)arg3 ;
-(NSString *)outContent;
@end


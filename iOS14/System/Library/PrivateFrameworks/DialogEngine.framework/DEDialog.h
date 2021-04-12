/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <DialogEngine/DialogEngine-Structs.h>
#import <DialogEngine/DENode.h>

@class NSString, DESpeakableString;

@interface DEDialog : DENode {

	shared_ptr<siri::dialogengine::Dialog>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::Dialog>* This;              //@synthesize This=_This - In the implementation block
@property (retain) NSString * id; 
@property (assign) DESpeakableString * content; 
@property (assign) DESpeakableString * caption; 
-(BOOL)validate:(id)arg1 ;
-(NSString *)id;
-(DESpeakableString *)caption;
-(void)setCaption:(DESpeakableString *)arg1 ;
-(DESpeakableString *)content;
-(shared_ptr<siri::dialogengine::Dialog>*)This;
-(id)init;
-(void)setContent:(DESpeakableString *)arg1 ;
-(void)setId:(NSString *)arg1 ;
-(BOOL)isSelectable:(id)arg1 ;
-(id)getExpandedContent:(id)arg1 ;
-(id)getExpandedCaption:(id)arg1 ;
-(void)setThis:(shared_ptr<siri::dialogengine::Dialog>*)arg1 ;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Dialog>*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

